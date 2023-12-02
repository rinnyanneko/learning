import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Objects;

public class FormTest extends JFrame{
    private JPanel main;
    private JTextField Account;
    private JPasswordField Password;
    private JButton LoginButton;
    private JLabel label;

    public FormTest(){
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(500, 200);
        setTitle("Hello GUI!");
        setContentPane(main);
        LoginButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String acc = Account.getText();
                String pwd = Password.getText();
                if (Objects.equals(acc, "rinnyanneko")){
                    if (Objects.equals(pwd, "1234")){
                        javax.swing.JOptionPane.showMessageDialog(null, "Correct Login!");
                    }else {
                        javax.swing.JOptionPane.showMessageDialog(null, "Incorrect Login!");
                    }
                }else {
                    javax.swing.JOptionPane.showMessageDialog(null, "Incorrect Login!");
                }
            }
        });
    }

    public static void main(String[] args) {
        new FormTest();
    }
}
