class Solution {
    public String[] findWords(String[] words) {
        String row1 = "qwertyuiop";
        String row2 = "asdfghjkl";
        String row3 = "zxcvbnm";
        int count1 = 0, count2 = 0, count3 = 0;
        ArrayList<String> result = new ArrayList<>();
        
        for (String word : words) {
            String lowerCaseWord = word.toLowerCase();
            count1 = 0; count2 = 0; count3 = 0;

            for (int i = 0; i < lowerCaseWord.length(); i++) {
                for (int j = 0; j < row1.length(); j++) {
                    if (lowerCaseWord.charAt(i) == row1.charAt(j)) {
                        count1++;
                    }
                }
            }

            for (int i = 0; i < lowerCaseWord.length(); i++) {
                for (int j = 0; j < row2.length(); j++) {
                    if (lowerCaseWord.charAt(i) == row2.charAt(j)) {
                        count2++;
                    }
                }
            }

            for (int i = 0; i < lowerCaseWord.length(); i++) {
                for (int j = 0; j < row3.length(); j++) {
                    if (lowerCaseWord.charAt(i) == row3.charAt(j)) {
                        count3++;
                    }
                }
            }

            if (count1 == lowerCaseWord.length()) {
                result.add(word);
            } else if (count2 == lowerCaseWord.length()) {
                result.add(word);
            } else if (count3 == lowerCaseWord.length()) {
                result.add(word);
            }
        }

        String[] finalResult = new String[result.size()];
        int index = 0;
        for (String validWord : result) {
            finalResult[index++] = validWord;
        }

        return finalResult;
    }
}
