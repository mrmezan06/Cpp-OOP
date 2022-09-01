interface bank {
    float interestRate();
}

class SBI implements bank {
    public float interestRate() {
        return 8.5f;
    }
}

class DBBL implements bank {
    public float interestRate() {
        return 9.5f;
    }
}

/*
 * multiple inheritance is not supported in the case of
 * class because of ambiguity. However, it is supported
 * in case of an interface because there is no ambiguity.
 * It is because its implementation is provided by the
 * implementation class.
 */

interface Printable {
    void print();
}

interface Readable {
    void print();
}

class Printer implements Printable, Readable {
    public void print() {
        System.out.println("Printing...");
    }
}

/* Interface inheritance */

interface Showable extends Printable {
    void show();
}

class Printer2 implements Showable {
    public void print() {
        System.out.println("Inheritance Printing...");
    }

    public void show() {
        System.out.println("Inheritance Showing...");
    }
}

/* Java 8 Default method */

interface bank2 {
    float interestRate();

    default float getRate() {
        return interestRate();
    }
}

class SBI2 implements bank2 {
    public float interestRate() {
        return 8.5f;
    }
}

interface Drawable {
    void draw();

    /* Default Method another example */
    default void msg() {
        System.out.println("default method");
    }

    // Static method only available in interface
    static int cube(int x) {
        return x * x * x;
    }
}

class Rectangle implements Drawable {
    public void draw() {
        System.out.println("drawing rectangle");
    }
}

public class Interface_example {
    public static void main(String[] args) {
        bank b = new SBI();
        System.out.println("Interest rate on SBI is " + b.interestRate());
        b = new DBBL();
        System.out.println("Interest rate on DBBL is " + b.interestRate());
        Printer p = new Printer();
        p.print();

        // Showable is a subtype of Printable and Readable
        // so we can use it as a Printable and Readable
        // Showable p2 = new Printer2();
        Printer2 p2 = new Printer2();
        p2.print();
        p2.show();

        // Default method
        bank2 b2 = new SBI2();
        System.out.println("Interest rate on SBI is " + b2.getRate());
        // Another default method example
        Drawable d = new Rectangle();
        d.draw();
        d.msg();
        // Static method
        System.out.println("Cube of 3 is " + Drawable.cube(3));
    }
}
//Test