public abstract class Head extends Person {
    private int headLevel;
    public Head(String name, int age, int salary, int headLevel) {
        super(name, age, salary);
        this.headLevel = headLevel;
    }

    public int getHeadLevel() {
        return headLevel;
    }

    public void setHeadLevel(int headLevel) {
        this.headLevel = headLevel;
    }


}
