import java.util.HashMap;

public class MapExam {

    public static void main(String[] args) {
        HashMap<String, String> players = new HashMap<String, String>();

        players.put("최동원", "야구");
        players.put("차범근", "축구");
        players.put("홍수환", "권투");

        System.out.println(players.get("최동원"));
    }
}