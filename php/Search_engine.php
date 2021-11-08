<?php

function is_bot($system) {

	$bot_list = array(
		'Googlebot', 'Baiduspider', 'ia_archiver',
		'R6_FeedFetcher', 'NetcraftSurveyAgent',
		'Sogou web spider', 'bingbot', 'Yahoo! Slurp',
		'facebookexternalhit', 'PrintfulBot', 'msnbot',
		'Twitterbot', 'UnwindFetchor', 'urlresolver'
	);
	
	foreach($bot_list as $bl) {
		if( stripos( $system, $bl ) !== false )
			return true;
	}
	
	return false;
}

echo is_bot('Googlebot');

?>
