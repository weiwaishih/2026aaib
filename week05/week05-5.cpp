//week05-5 好玩的程式設計
int[]a = {10, 20, 30, 40, 50, 60, 70};
int[]b = {0, 0, 0, 0, 0, 0, 0};
void setup() {
  size(700, 100);
}
void draw() {
  for (int i=0; i<7; i++) {
    if (b[i]==0) {
      fill(#FFFFF2);
      rect( i*100, 0, 100, 100);
    } else{// 否則
      fill(#F5CBFF); // 就畫淡紫色
      rect(i*100, 0, 100, 100);
    }
  }
}
void mousePressed() { // mouse按下去的時候
  int i = mouseX/100; // 換算座標, 看是第幾個格子
  if (b[i]==0) b[i] = 1; //
  else b[i] = 0; // 或1會變0
}
