import configparser
import tweepy

# Read the config file
config = configparser.ConfigParser()
config.read('config.ini')

# Read the values
api_key = config["twitter"]["api_key"]
api_key_secret = config['twitter']['api_key_secret']
access_token = config['twitter']['access_token']
access_token_secret = config['twitter']['access_token_secret']

auth = tweepy.OAuthHandler(api_key, api_key_secret)
auth.set_access_token(access_token, access_token_secret)
api = tweepy.API(auth)

auth = tweepy.OAuthHandler(api_key, api_key_secret)
auth.set_access_token(access_token, access_token_secret)
api = tweepy.API(auth)

user_id = "1289391274433249280"
user1 = api.get_user(user_id=user_id)
user1.name
print(user1.name)
# Output: 'QuantInsti'


# using get_user with screen_name
screen_name = "vishalraj__"
user2 = api.get_user(screen_name=screen_name)
user2.id 
print(user2.id)

print(user1.description)

print(f'The user {user2.screen_name} was created on {(user2.created_at).strftime("%m/%d/%Y, %H:%M:%S")}')


print(f"The user {user2.screen_name} has {user2.followers_count} followers.\n")


# Fetch a user's timeline
user2.timeline

# keyword = 'vishal'
# limit=300

# tweets = tweepy.Cursor(api.search_tweets, q=keyword, tweet_mode='extended').items(limit)
# print(tweets.num_tweets)

# search=api.search_tweets('count')
# print(tweets.text)

tweets = api.search_tweets(q="India",lang='en',count=100)

for tweet in tweets:
    print(tweet.text)