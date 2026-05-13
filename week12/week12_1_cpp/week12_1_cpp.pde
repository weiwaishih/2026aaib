//week12-1 好玩的地鼠()
//File-Preference自型放大
PImage img; // 圖片的變數 img
//要先把老師給你「桌面」gopher.png拉到程式裡
void setup()  {
  size(300, 300); // 視窗大小
  img = loadImage("gopher.png"); // 讀入圖檔
}
float a = 0;
void draw() {
  a += 0.03;
  background(128); // 灰色背景
  //float x = 100 + 50*cos(a), y = 100 +50*sin(a); // 三角函數
  float x =100 + 0*cos(a), y = 250 + 50*sin(a); // 三角函數
  image(img, x, y, 100, 100);
  //image(img, 0, 0, 100, 100); // 畫出圖片
  // 函式呼叫, 有5個參數: (圖片, x, y, 寬, 高)
}
