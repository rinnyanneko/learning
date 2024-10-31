public class Shirt extends Clothing{
    private char colorCode;
    private int neckSize;

    // this() 與 super() 都必須是方法中的第一行敍述
    // this() 與 super() 不會同時存在
    public Shirt(){
        this(1);
        System.out.println("No-args constructor of Shirt.");

    }

    // subclass 的 constructor 預設會呼叫 super( )
    // 若 superclass 中沒有 No argument conctructor , 會繼承失敗`
    // 除非用 super(value) 指定呼叫有參數的 constructor
    public Shirt(int a){
        super(1);
        System.out.println("One-arg constructor of Shirt.");
    }

    public int getNeckSize() {
        return neckSize;
    }

    public void setNeckSize(int neckSIze) {
        this.neckSize = neckSIze;
    }

    public char getColorCode() {
        return colorCode;
    }

    public void setColorCode(char colorCode) {
        this.colorCode = colorCode;
    }
    public void display(){
        System.out.println(getInfo());
    }
    @Override
    // 存取修飾詞可以相同或更寬鬆, 不可以更嚴格
    public String getInfo(){
        return super.getInfo()+":"+colorCode+":"+neckSize;
    }
}
