public class Item {
    public String size;
    public char color;
    public void setColor(char color){
        this.color = color;
    }
    public void setSize(String size){
        this.size = size;
    }
    public void display(){
        System.out.println(size+":"+color);
    }
}
