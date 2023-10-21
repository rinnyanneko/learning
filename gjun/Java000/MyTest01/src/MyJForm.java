import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MyJForm extends JFrame {
    private JTextField txt01;
    private JPanel panel;
    private JTextField txt02;
    private JButton calculateButton;
    private JButton clearButton;
    private JLabel result;
    public MyJForm() {
        setContentPane(panel);
        setTitle("GUI");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(500, 300);
        setVisible(true);
        calculateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println(txt01.getText() + txt02.getText());
                double d1 = Double.parseDouble(txt01.getText());
                double d2 = Double.parseDouble(txt02.getText());
                System.out.println(d1 + d2);
                result.setText("運算結果：" + (d1 + d2));
            }
        });
        clearButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                txt01.setText("");
                txt02.setText("");
                result.setText("運算結果：");
            }
        });
    }

    public static void main(String[] args) {
        new MyJForm();
    }
}

