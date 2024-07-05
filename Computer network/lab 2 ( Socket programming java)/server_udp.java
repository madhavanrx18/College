import java.io.IOException; 
import java.net.DatagramPacket; 
import java.net.DatagramSocket; 
 
public class server_udp { 
    public static void main(String[] args) throws IOException { 
        DatagramSocket ds = new DatagramSocket(1234); 
        byte[] receivedData = new byte[65535]; 
        DatagramPacket dpReceive = null; 
 
        while (true) { 
            dpReceive = new DatagramPacket(receivedData, receivedData.length); 
 
            ds.receive(dpReceive); 
 
            System.out.println("Client:-" + data(receivedData)); 
 
            if (data(receivedData).toString().equals("bye")) { 
                System.out.println("Client sent bye.....EXITING"); 
                break; 
            } 
 
            receivedData = new byte[65535]; 
        } 
        ds.close(); 
    } 
 
    public static StringBuilder data(byte[] a) { 
        if (a == null) 
            return null; 
        StringBuilder ret = new StringBuilder(); 
        int i = 0; 
        while (a[i] != 0) { 
            ret.append((char) a[i]); 
            i++; 
        } 
        return ret; 
    } 
 
}