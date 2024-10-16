package test;
import java.util.ArrayList;
import java.util.Random;

class Parrot {
    private ArrayList<String> phrases;
    private Random rand;

    public Parrot(String initialPhrase) {
        phrases = new ArrayList<>();
        phrases.add(initialPhrase);
        rand = new Random();
    }

    public void say() {
        System.out.println(phrases.get(rand.nextInt(phrases.size())));
    }

    public void say(int counter) {
        for (int i = 0; i < counter; i++) {
            say();
        }
    }

    public void addPhrase(String newPhrase) {
        phrases.add(newPhrase);
    }
}

public class Main {
    public static void main(String[] args) {
        Parrot papuga = new Parrot("Dzwoni papuga");

        papuga.addPhrase("Bazinga");
        papuga.addPhrase("Test01");
        papuga.addPhrase("Virtual XI");

        papuga.say(3);
    }
}