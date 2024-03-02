package com.example.lambda;

import java.util.List;
import java.util.function.Function;

/**
 *
 * @author MikeW
 */
public class A03Function {
  
  public static void main(String[] args){ 

    List<SalesTxn> tList = SalesTxn.createTxnList();
    SalesTxn first = tList.get(0);
    
    tList.stream()
            .map(t->t.getBuyerName())
            .forEach(System.out::println);
    
    System.out.println("-------------------------");
    tList.stream()
            .mapToDouble(t->t.getTransactionTotal())
            .mapToObj(t-> "$" + t)
            .forEach(System.out::println);
    
    System.out.println("-------------------------");
    
    Function<SalesTxn, String> buyerFunction = 
        t -> t.getBuyerName();    
    System.out.println("\n== First Buyer");
    System.out.println(buyerFunction.apply(first));      
  }
}