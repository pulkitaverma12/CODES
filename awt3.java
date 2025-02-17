import java.awt.*;
import java.awt.event.*;

public class awt3 implements ActionListener {
    // Making TextField an instance variable
    TextField tf;

    // Constructor
    awt3() {
        Frame f = new Frame("Action Example");
        tf = new TextField();
        tf.setBounds(50, 50, 150, 20);

        Button b = new Button("Click Here");
        b.setBounds(50, 100, 80, 30);
        b.addActionListener(this); // Now 'this' is valid

        f.add(b);
        f.add(tf);
        f.setSize(500, 500);
        f.setLayout(null);
        f.setVisible(true);

        // Closing the frame on window close
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }

    public void actionPerformed(ActionEvent e) {
        tf.setText("Welcome Java");
    }

    public static void main(String[] args) {
        new awt3(); // Creating an instance to call the constructor
    }
}
