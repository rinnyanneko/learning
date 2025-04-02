void setup(){
  size(500, 889);
  textSize(36);
  stroke(255);
}

void draw(){
  fill(255);
  background(80);
  text("Touch ID or enter password", 40, 100);
  text("Emergency", 44, 850);
  text("Cancel", 340, 850);
  fill(255, 255, 255, 0);
  for (int i = 70; i < 480; i += 70)
      circle(i, 160, 20);
  fill(70);
  int x = 120, y = 300;
  for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
          ellipse(x, y, 97, 101);
          x += 120;
      }
      x = 120;
      y += 120;
  }
  ellipse(240, 680, 97, 101);
}
