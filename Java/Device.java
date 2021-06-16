public class Device {
    public Device() {
        System.out.println();
        System.out.println("Class Device");
    }

    public void DeviceType() {
        System.out.println("Device Type: Mobile");
    }
}

class Mobile extends Device {
    public Mobile() {
        System.out.println("Class Mobile");
    }

    public void brand() {
        System.out.println("Brand: Apple");
    }

    public void ChipSet() {
        System.out.println("Latest: Apple A14 Bionic");
    }
}

class iPhone12ProMax extends Mobile {

    public iPhone12ProMax() {
        System.out.println("Device Model: iPhone 12 Pro Max");
    }

    public void ChipSet() {
        System.out.println("Latest: Apple A14 Bionic");
    }

    public static void main(String args[]) {
        iPhone12ProMax obj = new iPhone12ProMax();
        obj.DeviceType();
        obj.brand();
        obj.ChipSet();
    }
}