public abstract class Employee extends Person {
    private String position;
    private int promotionLevel;
    public Employee(String name, int age, int salary,String position , int promotionLevel) {
        super(name, age, salary);
        this.position = position;
        this.promotionLevel = promotionLevel;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    public int getPromotionLevel() {
        return promotionLevel;
    }

    public void setPromotionLevel(int promotionLevel) {
        this.promotionLevel = promotionLevel;
    }

    public void promotion(){
        this.promotionLevel++;
    }


}
