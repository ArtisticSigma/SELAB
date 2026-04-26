// ============================================================
// Ex No : 09
// Title : Webpage Login Automation (Selenium)
// ============================================================

package demo;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import java.time.Duration;

public class login {
    public static void main(String[] args) {
        System.setProperty("webdriver.edge.driver", "C:\\edgedriver\\msedgedriver.exe");
        WebDriver driver = new EdgeDriver();

        driver.manage().window().maximize();
        driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(10));
        driver.get("http://aucse.unaux.com/login.html");

        WebElement username    = driver.findElement(By.id("username"));
        WebElement password    = driver.findElement(By.id("password"));
        WebElement loginButton = driver.findElement(By.cssSelector("button[type='submit']"));

        username.sendKeys("user");
        password.sendKeys("pass");
        loginButton.click();

        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        if (driver.getCurrentUrl().contains("index.html")) {
            System.out.println("Test Passed: Login successful!");
        } else {
            System.out.println("Test Failed: Login unsuccessful.");
        }
    }
}

// ── Example output ───────────────────────────────────────────────────────────
// Test Passed: Login successful!
//
// Note: Uses URL http://aucse.unaux.com/login.html
//       Username: user   Password: pass
//       Checks if redirected URL contains "index.html"
