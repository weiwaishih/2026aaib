// week10-1 好玩的程式設計 - 打地鼠2
// File-Preferenece 字型設大一些, 接續上週 week09-2 好玩的程式設計 (打地鼠冒出來)
// 修改自 week09-1 好玩的程式設計 (打地鼠) Ctrl-N 新視窗
void setup() { // 設定1次
  size(300, 300); // 視窗大小 300 x 300
}
int [][] a = { {0, 0, 0}, {0,0,0}, {0,0,0} }; // Java陣列
void mousePressed() { // week10-1 新加的程式: mouse按下去
  int i = mouseY / 100, j = mouseX / 100; // 左手i對應Y座標 右手j對應X座標
  if ( a[i][j] > 0 ) { // 打到地鼠了!
    a[i][j] = -60; // 由正變負, 負的、代表死掉的地鼠 (要讓地鼠流血死掉了)
  }
}
void draw() { // 每秒畫60次
  background(#FFFFF2); // 背景淡黃色
  if (frameCount%60==0) { // 每過 60 frame (1秒) 生1隻地鼠
    int i = int(random(3)), j = int(random(3));
    a[i][j] = 60; // 亂數決定 i 跟 j 的值, 再把 a[i][j] 生60
  }
  for (int i=0; i<3; i++) { // 左手i
    for (int j=0; j<3; j++) { // 右手j
      int x = 50 + j*100, y = 50 + i*100;
      if (a[i][j]<0) { // 負的、代表死掉的地鼠
        fill(0); // 黑色的血 fill(255, 0, 0); // 紅色的血, 留在原地
        a[i][j]++; // 負60,慢慢加大
      } else if (a[i][j]>0) {
        fill(#C61616, a[i][j]*4); // 地鼠色, 半透明
        a[i][j]--; // 數值會變小, 慢慢就透明不見了
      } else fill(#FFFFF2);
      ellipse(x, y, 90, 90); // 地鼠的洞
    }
  }
}
