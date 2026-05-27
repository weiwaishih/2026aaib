// week11-1 好玩的程式設 (三角函式/函數)
// File-Preference 字型放大 36號字
void setup(){
  size(500, 500); // 視窗大小
}
float a = 0; // 角度a
void draw(){
  background(#FFFFF2); // 淡黃色背景
  rectMode(CENTER); // 設定畫方形的模式, 要置中對齊(比較好看)
  for(int i=0; i<6; i++) { // 要畫出6個方形
    // 國中教過三角函數 cos(a) sin(a) 不知道用處? 就是 x座標、y座標
    float x = 250 + 200*cos(a+PI/3*i), y = 250 + 100*sin(a+PI/3*i);
    rect(x, y, 80, 100); // 6個方形,位置會隨著角度而不同(轉動)
  }
  a += 0.03; // 轉動角度的速度, 現在設成3倍數
}
