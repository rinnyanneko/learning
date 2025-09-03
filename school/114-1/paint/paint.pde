int size = 25;

void setup(){
  size(1024, 768);
  background(255, 255, 255);
  noStroke();
  fill(255, 0, 0);
}

void draw(){
  if (mousePressed)
    circle(mouseX, mouseY, this.size);
  penSize();
}

void keyPressed(){
  switch (keyCode){
    case UP:
      size++;
      break;
    case DOWN:
      if (size > 0)
        size--;
      break;
    default:
      return;
  }
}

void penSize(){
  fill(0, 255, 0);
  for (int i = 0; i < 20; i+=20)
    rect(i, 0, 20, 20);
  stroke(255);
  line(3, 10, 17, 10);
  line(10, 3, 10, 17);
  fill(255, 0, 0);
}
