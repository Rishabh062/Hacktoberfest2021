from selenium import webdriver
PATH = "C:\Program Files (x86)\ChromeDriver\chromedriver.exe"

driver = webdriver.Chrome(PATH)

driver.get("https://chromedriver.chromium.org/downloads")
driver.__exit__()