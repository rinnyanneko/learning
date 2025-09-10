int size = 25;
int r = 255;
int g = 0;
int b = 0;
int shape = 1; //1=Circle, 2=Oval, 3=Square, 4=Rectangle

void setup(){
  size(1024, 768);
  background(255, 255, 255);
  noStroke();
}

void draw(){
  fill(r, g, b);
  noStroke();
  if (mousePressed &&
    !(mouseY >= 0 && mouseY < 20 && mouseX >= 0 && mouseX < 40) &&
    !(mouseY >= 20 && mouseY < 540 && mouseX >= 0 && mouseX < 20)
    ){
      switch (shape){
        case 1: //Circle
          circle(mouseX, mouseY, this.size);break;
        case 2: //Oval
          ellipse(mouseX, mouseY, this.size+8, this.size);break;
        case 3: //Square
          rect(mouseX, mouseY, this.size, this.size);break;
        case 4: //Rectangle
          rect(mouseX, mouseY, this.size, this.size);break;
        default:
          break;
      }
    }
  penSize();
  colorPicker();
}

void mousePressed(){
  if (mouseY >= 0 && mouseY < 20){
    if (mouseX >= 0 && mouseX < 20){
      this.size ++;
    }else if (mouseX >= 20 && mouseX < 40 && size > 0){
      this.size--;
    }
  }else if (mouseX >= 0 && mouseX < 20 && mouseY >= 20 && mouseY < 540){
    for (int i = 0; i <= 25; i++){
      if (mouseY >= i*20+20 && mouseY < i*20+40){
        r = 0; g = i*10;b = 0;
      }
    }
  }
}

void keyPressed(){
  switch(key){
    case 'r':
      r = 255; g = 0; b = 0; break;
    case 'g':
      r = 0; g = 255; b = 0; break;
    case 'b':
      r = 0; g = 0; b = 255; break;
    case '1':
      shape = 1; break;
    case '2':
      shape = 2; break;
    case '3':
      shape = 3; break;
    case '4':
      shape = 4; break;
    case ' ':
      background(255);
      break;
    default:
      break;
  }
  switch (keyCode){
    case UP:
      this.size++;
      break;
    case DOWN:
      if (size > 0)
        this.size--;
      break;
    default:
      return;
  }
}

void colorPicker(){
  for (int i = 0; i <= 25; i++){
    fill(0, i*10, 0);
    rect(0, i*20+20, 20, 20);
  }
}
void penSize(){
  fill(0, 255, 0);
  for (int i = 0; i < 20; i+=20)
    rect(i, 0, 40, 20);
  stroke(255);
  line(3, 10, 17, 10);
  line(10, 3, 10, 17);
  line(23, 10, 37, 10);
}
