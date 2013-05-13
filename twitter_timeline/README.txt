Twitter-Timeline
================

From .info description: Displays Twitter timeline for any account (called as a function). Caches output in /tmp/. Uses Matt Harris' tmhOAuth library.

Example Use:

<?php
echo getTweetBlock('GelmanLibrary');
?>

Where GelmanLibrary is the Twitter handle. Output is formatted for the GW Libraries site, to change it create your own classes for

.twitter-block
.twitter-text
.twitter-feed

And change the formatting in the .module file:
 
Header ($blockHeader) = "<div style='width:100%;'><div class='twitter-block'><img src='".$profileImage."' width='20' height='20' /> <a href='http://twitter.com/".$twitterAccount."' target='_blank'>Latest from @".$twitterAccount."</a></div></div>";

Tweet formatting: = "<p class='twitter-text'><a href='http://twitter.com/".(${screenName . $i})."'>@".(${screenName . $i})."</a>: ".(${tweet . $i})."</p>";

Complete output = $blockHeader."<div class='twitter-feed'>".$formattedTweets."</div>"