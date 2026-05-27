//week14-1 打地鼠,結合week13-1 week10-1
//修改自week13-1
// 接續week12-1 week11-1 程式
// 把gopher.png 拉到程式裡
PImage img; //外面宣告變數
void setup(){
  size(300,300); //視窗大小
  img = loadImage("gopher.png"); // 把gopher.png 圖檔 拉到程式裡
}
void mousePressed(){
  int i = mouseY / 100, j = mouseX / 100;
  if(a[i][j]>0){
    a[i][j] = -120;
  }
}
int [][] a = {{0,0,0}, {0,0,0}, {0,0,0}}; //地鼠有沒有冒起來
void draw(){
  background(#FFFFF2); //淡黃色背景
  if(frameCount%60==0){ //每60frames(1秒)冒出一隻地鼠
    int i=int(random(3)), j = int(random(3));
    a[i][j]=60; // 會站起來60frames(1秒)
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      float x = j*100, y = i*100+100;
      if(a[i][j]>0){
        a[i][j] -= 1; //生命倒數計時
        y -= 100*sin(a[i][j]*PI/60);
        image(img,x,y,100,100);
        image(img, x, y, 100, 100);
      }else if (a[i][j]<0){
       y -= 100;
       rect(x,y,100,100);
       line(x,y,x+100,y+100);
       line(x+100,y,x,y+100);
       a[i][j] += 1;
      }
    }  
    rect(0, 100+i*100, 300, 100); // 在低一格的地方, 放長方形擋住
  }
}
