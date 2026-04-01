// week06-2 好玩的程式設計
// Ctrl-N開新視窗, 貼上剛用的 week06-1
// 接續上週的 week01-1
int[][] b = new int[10][16]; // Java 的 2D陣列
void setup(){
  size(800, 500); // 視窗大小 800 x 500
}
void draw() {
  background(255); // 背景白色
  for (int i=0; i<10; i++) { // 左手 i 的 for(迴圈) 對應 y 座標
    for(int j=0; j<16; j++) { // 右手 j 的 for(迴圈) 對應 x 座標
      if(b[i][j] > 0) {
        fill(#F5CBFF,b[i][j]*4); // 如果陣列有1,就放淡紫色
        b[i][j]--;//慢慢變小
      }else fill(255); // 否則, 就放白色
      rect( j*50, i*50, 50, 50); // 小格子 (右手j對應x座標, 左手i對應y座標
     }
   }
}
void mouseDragged() {
  int i = mouseY / 60, j = mouseX / 50; //左手i對應y座標, 右手j對應x座標
  b[i][j] = 60; //設成1,等一下會畫紫色
}
