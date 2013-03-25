Twitter-Timeline
================

From .info description: Displays Twitter timeline for any account (called as a function). Caches json in /tmp/. Uses Matt Harris' tmhOAuth library.

Example Use:

echo getTweets(GelmanLibrary);

Where GelmanLibrary is Twitter handle. Output is formatted for the GW Libraries site, to change it create your own classes for

.twitter-block
.twitter-text

Or change the formatting in the .module file:
 
<div style='width:100%;'><div class='twitter-block'><img src='".$profileImage."' width='20' height='20' /> <a href='http://twitter.com/".$screenName."' target='_blank'>Latest from @".$twitterAccount."</a></div></div><div class='twitter-feed'><p class='twitter-text'><a href='http://twitter.com/".$screenName."'>@".$screenName."</a>: ".$newtweet0."</p><p class='twitter-text'><a href='http://twitter.com/".$screenName."'>@".$screenName."</a>: ".$newtweet1."</p><p class='twitter-text'><a href='http://twitter.com/".$screenName."'>@".$screenName."</a>: ".$newtweet2."</p><p class='twitter-text'><a href='http://twitter.com/".$screenName."'>@".$screenName."</a>: ".$newtweet3."</p><p class='twitter-text'><a href='http://twitter.com/".$screenName."'>@".$screenName."</a>: ".$newtweet4."</p></div>";
    }


