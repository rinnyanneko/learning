import processing.serial.*;

int code;
int x = 400;
int y = 400;
int inByte = 0;
Serial myPort = new Serial(this, "COM3", 19200);

void setup(){
  size(800, 800);
  background(255);
}

void draw(){
  while (myPort.available() > 0){
    this.inByte = myPort.read();
    println(this.inByte);
  }
  background(255);
  circle(this.x, this.y, 50);
  switch (this.inByte){
    case 49:
      if (this.x <= 800)
        this.x += 5;
      break;
    case 50:
      if (this.x >= 0)
        this.x -= 5;
      break;
    case 51:
    if (this.y >= 0)
        this.y += 5;
      break;
    case 52:
      if (this.y <= 800)
        this.y -= 5;
      break;
    default:
      break;
  }
  this.inByte = -1;
}
