// week09-1 好玩的程式設計 (打地鼠)
// File-Preference 字型設大一點
void setup(){ //設定1次
  size(300, 300); // 視窗大小 300 x 300
}
void draw(){ // 每秒畫60次
  background(#FFFFF2); // 背景淡黃色
  for (int i=0; i<3; i++) { // 左手i
    for (int j=0; j<3; j++) { // 右手j
      int x = 50 + j*100, y = 50 + i*100;
      ellipse(x, y, 90, 90); // 地鼠的洞
    }
  }
}
