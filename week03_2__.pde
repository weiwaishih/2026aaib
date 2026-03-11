//week03-2 好玩的程式設計 Processing 結合 for() + if()
// Ctrl-N 開新的程式視窗
void setup() {
  size(800, 100);
}
void draw() {
  background(#FFD152); // Tool-色彩選擇器 挑色彩
  for (int x = 0; x < 800; x += 100) { // x: 0 100 200 ...
   if( x < mouseX && mouseX < x + 100) fill(0,255,0);
   else fill(#FFD152); // 依照 mouseX 的位置,決定色彩
   rect(x, 0, 100, 100);
  }
}
