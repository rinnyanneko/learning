package com.example;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;


public class ExecutorExample {

    public static void main(String[] args) {
        ExecutorService es = Executors.newFixedThreadPool(3);
        Runnable r = new ExampleRunnable("one");
        for (int i = 0; i < 100; i++) {
            es.execute(r/*new ExampleRunnable("one")*/);
        }
        //es.execute(new ExampleRunnable("two"));
        es.shutdown();
    }
}
