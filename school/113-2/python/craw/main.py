import requests

url: str = "https://www.ptt.cc/bbs/nba/index.html"
resp = requests.get(url)
if resp.ok:
    print(resp.text)
else:
    print(resp)