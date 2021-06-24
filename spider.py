import requests
from bs4 import BeautifulSoup

headers = {
    'Cookie' : 'BIDUPSID=88E9080BC131A4F08646437415ED7B4E; PSTM=1620745238; BAIDUID=88E9080BC131A4F012AA6D2226D14362:FG=1; BD_UPN=12314753; __yjs_duid=1_2832afa1e0a0242b4dd86fdd3cc3f2141620884273901; BAIDUID_BFESS=18E5466CB3A8DB180EE0B0887E26C70F:FG=1; delPer=0; BD_HOME=1; BD_CK_SAM=1; COOKIE_SESSION=624656_0_5_5_11_4_0_0_5_3_0_0_624483_0_0_0_1623758806_0_1623758806%7C9%230_0_1623758806%7C1; BDRCVFR[pbtmRM77MQ6]=mk3SLVN4HKm; PSINO=3; H_PS_PSSID=34131_34099_31660_33607_34106_34135; H_PS_645EC=5445VtEjj6RxFO%2FjAwHTlxV4J3pbTcDVAkGzFkcjAT0QKv%2B1vKuiv1i7zWM; BA_HECTOR=04a4210l2h84010hv61gd99500q; BDORZ=B490B5EBF6F3CD402E515D22BCDA1598',
    'User-Agent' : 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.40 Safari/537.36'
}
html = requests.get('https://www.baidu.com/s?tn=51076811_dg&wd=%E4%B8%8A%E6%B5%B7%E5%A4%A7%E5%AD%A6',headers=headers)
# html = requests.get('https://www.baidu.com/s?tn=51076811_dg&wd=python',headers=headers)
html.encoding = html.apparent_encoding
# soup = BeautifulSoup(html.text,'lxml')
soup = BeautifulSoup(html.text,'html.parser')
urls = soup.select('div.result.c-container h3 a')
for u in urls:
    print(u['href'])
title = soup.select('div.result.c-container h3 a')
for i in title:
    print(i.text)
# print(soup.title)
