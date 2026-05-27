//week08-2 會跟著mouse移動的氣球
//Ctrl-N 新視窗
void setup(){
  size(500,500);//視窗大小
  img = loadImage("balloon.png");//讀入圖片
}
PImage img;//圖片宣告(要再拉一次balloon.png到程式裡)
int x,y;
void draw(){
  background(255);//白色背景
  x = mouseX-96/2;//x座標(變數設定)
  y = mouseY-132;//y座標
  image(img,x,y,96,132);//照著座標畫氣球
  //image(img,mouseX-96/2,mouseY-132,96,132);//跟著mouse跑的氣球
}//注意,要再拉一次balloon.png到程式裡
