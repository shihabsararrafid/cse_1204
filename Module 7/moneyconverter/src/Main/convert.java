package Main;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class convert {

    public static void converter() {

        JFrame f = new JFrame("MONEY CONVERTER");

        JLabel l1, l2;

        JTextField t1, t2;

        JButton b1, b2, b3;

        l1 = new JLabel("Taka:");
        l1.setBounds(20, 40, 60, 30);
        l2 = new JLabel("Dollars:");
        l2.setBounds(170, 40, 60, 30);

        t1 = new JTextField("0");
        t1.setBounds(80, 40, 60, 30);
        t2 = new JTextField("0");
        t2.setBounds(240, 40, 60, 30);

        b1 = new JButton("Taka");
        b1.setBounds(70, 80, 80, 25);
        b2 = new JButton("Dollar");
        b2.setBounds(230, 80, 80, 25);
        b3 = new JButton("Close");
        b3.setBounds(150, 150, 80, 30);
        b1.setFocusable(false);
        b2.setFocusable(false);
        b3.setFocusable(false);
        b3.setForeground(Color.red);
        b3.setFont(new Font("", Font.BOLD, 15));

        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // Converting to double
                String str = t1.getText();
                try {

                    double d = Double.parseDouble(t1.getText());

                    double d1 = (d / 105.84);

                    String str1 = String.valueOf(d1);

                    t2.setText(str1);
                } catch (NumberFormatException event) {
                    // Integer len = str.length();
                    JOptionPane optionPane = new JOptionPane();
                    optionPane.showMessageDialog(null, "Please input number",
                            "Invalid Input", JOptionPane.ERROR_MESSAGE);
                    t1.setText("");
                    // System.out.println(str);
                }

            }
        });

        b2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // Converting to double
                try {
                    double d2 = Double.parseDouble(t2.getText());

                    // converting Dollars to rupees
                    double d3 = (d2 * 105.84);

                    // Getting the string value of the
                    // calculated value
                    String str2 = String.valueOf(d3);

                    // Placing it in the text box
                    t1.setText(str2);
                } catch (NumberFormatException event) {
                    JOptionPane optionPane = new JOptionPane();
                    optionPane.showMessageDialog(null, "Please input number",
                            "Invalid Input", JOptionPane.ERROR_MESSAGE);
                    t2.setText("");
                }

            }
        });

        b3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                f.dispose();
            }
        });

        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });

        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(t2);
        f.add(b1);
        f.add(b2);
        f.add(b3);

        f.setLayout(null);
        f.setSize(400, 300);
        f.setVisible(true);
    }

    public static void main(String args[]) {
        converter();
    }
}
