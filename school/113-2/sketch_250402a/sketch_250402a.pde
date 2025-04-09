private String input = "";
private final String PASSWORD = "507507";
private boolean pwdCorrect = false;
private boolean pwdIncorrect = false;
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
    int num = 1;
    int x = 120, y = 300;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            fill(70);
            ellipse(x, y, 97, 101);
            fill(255, 255, 255);
            text(str(num++), x-10, y+10);
            x += 120;
        }
        x = 120;
        y += 120;
    }
    fill(70);
    ellipse(240, 680, 97, 101);
    fill(255, 255, 255);
    text("0", 240-10, 680+10);
    fill(255, 0, 0);
    if (pwdIncorrect){
        text("Password Incorrect!", 100, 300);
    }else if (pwdCorrect){
        text("Password Correct!", 100, 300);
    }
}

void mousePressed(){
    int x = 120, y = 300;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (dist(x, y, mouseX, mouseY) <= 50){
                input += str(enter(i, j));
            }
            x += 120;
        }
        x = 120;
        y += 120;
    }
    if (dist(240, 680, mouseX, mouseY) <= 50){
        println("0");
        input += "0";
    }
    if (input.length() == 6){
        if (PASSWORD.equals(input)){
            pwdIncorrect = false;
            pwdCorrect = true;
            println("Password correct!");
        }else{
            pwdIncorrect = true;
            println("Password incorrect!");
            input = "";
        }
    }
}
int enter(int x, int y){
    switch (x){
        case 0:switch (y){
            case 0:
                println("1");
                return 1;
            case 1:
                println("2");
                return 2;
            case 2:
                println("3");
                return 3;
            default:
                println("Unknown Input!");
                return -1;
        }case 1:switch (y){
            case 0:
                println("4");
                return 4;
            case 1:
                println("5");
                return 5;
            case 2:
                println("6");
                return 6;
            default:
                println("Unknown Input!");
                return -1;
        }case 2:switch (y){
            case 0:
                println("7");
                return 7;
            case 1:
                println("8");
                return 8;
            case 2:
                println("9");
                return 9;
            default:
                println("Unknown Input!");
                return -1;
        }
    }
    return -1;
}
