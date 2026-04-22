// week09-2 好玩的程式設計 (打地鼠冒出來)
// 修改自 week09-1 好玩的程式設計(打地鼠) +N 新視窗
// File-Preference 字型設大一點
void setup(){ //設定1次
  size(300, 300); // 視窗大小 300 x 300
}
int [][] a = { {0, 0, 0}, {0,0,0}, {0,0,0} }; // Java陣列
void draw(){ // 每秒畫60次
  background(#FFFFF2); // 背景淡黃色
  if (frameCount%60==0) { // 每過60 frame (1秒) 生1隻地鼠
    int i = int (random(3)), j = int (random(3));
    a[i][j] = 60; //亂數決定 i 跟 j的值,再把a[i][j] 生60
  }
  for (int i=0; i<3; i++) { // 左手i
    for (int j=0; j<3; j++) { // 右手j
      int x = 50 + j*100, y = 50 + i*100;
      if (a[i][j]>0) {
        fill(#C61616, a[i][j]*4); // 地鼠色, 半透明
        a[i][j]--; // 數值會變小, 慢慢就透明不見了
      } else fill(#FFFFF2);
      ellipse(x, y, 90, 90); // 地鼠的洞
    }
  }
}
