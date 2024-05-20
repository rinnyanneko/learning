package gameapi;

import java.util.ServiceLoader;

public class NewMain {
    public static void main(String[] args) {
         //一個集合物件, 包含專案所有實作Game的類別的物件.
        ServiceLoader<Game> game = ServiceLoader.load(Game.class);        
        for(Game g : game){
            // 可以自訂一個機制, 確實取得自己要的類別的物件.
           String s = g.getType();
           System.out.println(s);
           if(s.equals("Baseball")){
               System.out.println(" -> This is the object that I want.");
           }
        }        
    }
}
