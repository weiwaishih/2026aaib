//week08-1 程式設計 氣球(圖片)
//File-Preference 字型設大 去找氣球照片 balloon.png 半透明圖
size(500,500);
PImage img;//圖片宣告(你要把balloon.png從檔案總管「拉到」程式裡)
img = loadImage("balloon.png");//呼叫函式、讀入圖片
image(img,0,0,96,132);//看你的圖的大小,依比例調整,縮小
//image(圖,x,y,寬,高);
image(img,96,0,96*2,132*2);//兩倍大的氣球
