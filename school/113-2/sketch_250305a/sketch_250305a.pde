public void setup(){
    size(1280, 720);
    background(255, 128, 0);
}

public int x = 0;

public void draw(){
    circle(x++, 300, 10);
}
