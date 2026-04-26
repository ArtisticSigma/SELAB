// ============================================================
// Ex No : 10
// Title : Students Score Filter (Excel Read using JXL)
// ============================================================

package demo;

import java.io.File;
import java.io.IOException;
import jxl.Cell;
import jxl.CellType;
import jxl.Sheet;
import jxl.Workbook;
import jxl.read.biff.BiffException;

public class student_excel_read {
    private String inputFile;

    public void setInputFile(String inputFile) {
        this.inputFile = inputFile;
    }

    public void read() throws IOException {
        File inputWorkbook = new File(inputFile);

        if (!inputWorkbook.exists()) {
            System.out.println("Error: File not found!");
            return;
        }

        Workbook w;
        int count = 0;

        try {
            w = Workbook.getWorkbook(inputWorkbook);
            Sheet sheet = w.getSheet(0);

            for (int j = 0; j < sheet.getRows(); j++) {
                boolean studentHasHighScore = false;

                for (int i = 0; i < sheet.getColumns(); i++) {
                    Cell cell = sheet.getCell(i, j);

                    if (cell.getType() == CellType.NUMBER) {
                        try {
                            int score = Integer.parseInt(cell.getContents());
                            if (score > 60) {
                                studentHasHighScore = true;
                            }
                        } catch (NumberFormatException e) {
                            System.out.println("Warning: Non-numeric value in row " + j + ", column " + i);
                        }
                    }
                }

                if (studentHasHighScore) {
                    count++;
                }
            }

            System.out.println("Total students who scored more than 60 in one or more subjects: " + count);

        } catch (BiffException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) throws IOException {
        student_excel_read test = new student_excel_read();
        test.setInputFile("D:\\data.xls");
        test.read();
    }
}

// ── Example input file (D:\data.xls) ────────────────────────────────────────
// Student Name  Subject1  Subject2  Subject3
// Student1      35        67        60
// Student2      36        46        57
// Student3      59        48        58
// Student4      80        80        60
// Student5      35        29        28
// Student6      46        40        39
// Student7      59        53        52
// Student8      74        68        67
// Student9      91        85        84
//
// Output:
// Total students who scored more than 60 in one or more subjects: 4
