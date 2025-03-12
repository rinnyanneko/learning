public void setup(){
    size(1280, 720);
    background(255, 128, 0);
}

private int x = 5;
private int y = 5;

public void draw(){
    //background(255, 128, 0);
    if (y == 5 && x < 1275)
        circle(x++, y, 10);
    else if (y == 715 && x > 5)
        circle(x--, y, 10);
    else if (x == 1275 && y < 715)
        circle(x, y++, 10);
    else if (x == 5 && y > 5)
        circle(x, y--, 10);
    System.out.println(x+", "+y);
}
