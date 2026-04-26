// ============================================================
// Ex No : 07
// Title : Checkbox Count (Selenium)
// ============================================================

package demo;

import java.util.List;
import java.time.Duration;
import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import io.github.bonigarcia.wdm.WebDriverManager;

public class Checkbox {
    public static void main(String[] args) {
        WebDriverManager.edgedriver().setup();
        EdgeDriver driver = new EdgeDriver();
        driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(10));
        driver.manage().window().maximize();
        driver.get("file:///C:\\Users\\ELCOT\\Desktop\\SE/new.html");

        List<WebElement> checkboxes = driver.findElements(By.xpath("//input[@type='checkbox']"));
        System.out.println("Total checkboxes: " + checkboxes.size());

        for (int i = 0; i < checkboxes.size(); i += 4) {
            checkboxes.get(i).click();
        }

        int checkedCount = 0, uncheckedCount = 0;
        for (WebElement checkbox : checkboxes) {
            if (checkbox.isSelected()) {
                checkedCount++;
            } else {
                uncheckedCount++;
            }
        }

        System.out.println("Selected checkboxes: " + checkedCount);
        System.out.println("Unselected checkboxes: " + uncheckedCount);
    }
}

// ── Example output ───────────────────────────────────────────────────────────
// Total checkboxes: 2
// Selected checkboxes: 1
// Unselected checkboxes: 1
