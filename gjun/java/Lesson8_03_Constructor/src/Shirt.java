public class Shirt {
    public String description = "---description required---";
    public char colorCode = 'U';
    public double price;

    //constructor
    //名稱和類別相同
    //不可以有return type
    //用來讓物件建立者指派欄位初值
    //依參數來決定執行的method
    public Shirt(String description, char colorCode, double price){
        this.description = description;
        this.colorCode = colorCode;
        this.price = price;
    }
    //this.
    //方便呼叫 物件（實體）成員
    public Shirt(){
        this.display();
    }

    public void display(){
        System.out.println(description+":"+colorCode+":"+price);
        display();
    }
}
