import processing.net.*;

int size = 25;
int r = 255;
int g = 0;
int b = 0;
int shape = 1; //1=Circle, 2=Oval, 3=Square, 4=Rectangle
Client myClient = new Client(this, "127.0.0.1", 5204);

public void setup(){
  size(1024, 768);
  background(255, 255, 255);
  noStroke();
}

public void draw(){
  var code = this.read();
  if (code == 1){
    background(255, 255, 255);
  }else if (code == 0){
    var x = this.read()*4;
    var y = this.read()*4;
    this.shape = this.read();
    this.r = this.read();
    this.g = this.read();  
    this.b = this.read();
    fill(this.r, this.g, this.b);
    noStroke();
    switch (this.shape){
      case 1: //Circle
        circle(x, y, this.size);break;
      case 2: //Oval
        ellipse(x, y, this.size+8, this.size);break;
      case 3: //Square
        rect(x, y, this.size, this.size);break;
      case 4: //Rectangle
        rect(x, y, this.size, this.size);break;
      default:
        break;
    }
  }
//  penSize();
//  colorPicker();
}

private int read(){
  while (myClient.available() <= 0){}
  return myClient.read();
}
/*
void mousePressed(){
  if (mouseY >= 0 && mouseY < 20){
    if (mouseX >= 0 && mouseX < 20){
      this.size ++;
    }else if (mouseX >= 20 && mouseX < 40 && this.size > 0){
      this.size--;
    }
  }else if (mouseX >= 0 && mouseX < 20 && mouseY >= 20 && mouseY < 540){
    for (var i = 0; i <= 25; i++){
      if (mouseY >= i*20+20 && mouseY < i*20+40){
        this.r = 0; this.g = i*10; this.b = 0;
      }
    }
  }
}

void keyPressed(){
  switch(key){
    case 'r':
      this.r = 255; this.g = 0; this.b = 0; break;
    case 'g':
      this.r = 0; this.g = 255; this.b = 0; break;
    case 'b':
      this.r = 0; this.g = 0; this.b = 255; break;
    case '1':
      this.shape = 1; break;
    case '2':
      this.shape = 2; break;
    case '3':
      this.shape = 3; break;
    case '4':
      this.shape = 4; break;
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
  for (var i = 0; i <= 25; i++){
    fill(0, i*10, 0);
    rect(0, i*20+20, 20, 20);
  }
}
void penSize(){
  fill(0, 255, 0);
  for (var i = 0; i < 20; i+=20)
    rect(i, 0, 40, 20);
  stroke(255);
  line(3, 10, 17, 10);
  line(10, 3, 10, 17);
  line(23, 10, 37, 10);
}
*/
