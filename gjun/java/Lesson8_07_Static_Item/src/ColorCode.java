public class ColorCode {
    public static final char BLUE = 'b';
    public static final char BLACK = 'A';
    public static final char RED = 'r';
    public static final char YELLOW = 'y';
    public static final char PINK = 'p';
    public static char getCode(String color){
        char c = 'W';
        switch (color){
            case "BLUE":
                return BLUE;
            case "BLACK":
                return BLACK;
            case "RED":
                return RED;
            case "YELLOW":
                return YELLOW;
            case "PINK":
                return PINK;
            default:
                return '0';
        }
    }
    public static String getColor(char color){
        String s = null;
        switch (color){
            case 'b':
                s = "BLUE";
            case 'A':
                s = "BLACK";
            case 'r':
                s = "RED";
            case 'y':
                s = "YELLOW";
            case 'p':
                s = "PINK";
        }
        return s;
    }
}
