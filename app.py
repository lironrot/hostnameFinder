import os
import redis
from flask import Flask

app = Flask(__name__)
cache = redis.Redis(host='redis', port=6379)

@app.route('/')
def hello():
    myhost = os.uname()[1]
    return "The hostname is: " + str(myhost)