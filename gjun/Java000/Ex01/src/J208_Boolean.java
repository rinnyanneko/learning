/* 程式範例: J208_Boolean.java */

public class J208_Boolean {
    // 主方法
    public static void main(String[] args) {
        // 變數宣告
        int a = 6;
        int b = 3;
        boolean blnA = a > b;//比較運算
        boolean blnB = a == b;
        // 測試比較關係運算子
        System.out.println("小於: 6<3  結果為 " + (a < b));
        System.out.println("大於: 6>3  結果為 " + (a > b));
        System.out.println("小於等於: 6<=3 結果為 " + (a <= b));
        System.out.println("大於等於: 6>=3  結果為 " + (a >= b));
        System.out.println("等於: 6==3  結果為 " + (a == b));
        System.out.println("不等於: 6!=3  結果為 " + (a != b));
        // 測試邏輯運算子
        System.out.println("A條件運算式: " + blnA);
        System.out.println("B條件運算式: " + blnB);
        System.out.println("NOT條件運算: !A 結果為 " + (!blnA));
        System.out.println("AND條件運算: A && B 結果為 " + (blnA && blnB));
        System.out.println("OR條件運算: A || B 結果為 " + (blnA || blnB));
        System.out.println("XOR條件運算: A ^ B 結果為 " + (blnA ^ blnB));
    }
}
