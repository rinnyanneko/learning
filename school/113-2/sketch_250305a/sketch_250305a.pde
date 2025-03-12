public void setup(){
    size(1280, 720);
    background(255, 128, 0);
}

private int x = 0;
private int y = 0;
private boolean move_right = false;
private boolean move_down = false;

public void draw(){
    background(255, 128, 0);
    if (x >= 1270)
        move_right = false;
    else if (x <= 10)
        move_right = true;
    if (y >= 710)
        move_down = false;
    else if (y <= 10)
        move_down = true;
    if (move_right && move_down)
        circle(x++, y++, 10);
    else if (move_right && !move_down)
        circle(x++, y--, 10);
    else if (!move_right && move_down)
        circle(x--, y++, 10);
    else if (!move_right && !move_down)
        circle(x--, y--, 10);
    System.out.println(x+", "+y);
}
