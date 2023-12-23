params ["_max","_value","_perceivable"];

_required = round (80 * (_value / _max));

//Far quicker than using two for loops.
_bars = [
	"[                                                                                ]",
	"[|                                                                               ]",
	"[||                                                                              ]",
	"[|||                                                                             ]",
	"[||||                                                                            ]",
	"[|||||                                                                           ]",
	"[||||||                                                                          ]",
	"[|||||||                                                                         ]",
	"[||||||||                                                                        ]",
	"[|||||||||                                                                       ]",
	"[||||||||||                                                                      ]",
	"[|||||||||||                                                                     ]",
	"[||||||||||||                                                                    ]",
	"[|||||||||||||                                                                   ]",
	"[||||||||||||||                                                                  ]",
	"[|||||||||||||||                                                                 ]",
	"[||||||||||||||||                                                                ]",
	"[|||||||||||||||||                                                               ]",
	"[||||||||||||||||||                                                              ]",
	"[|||||||||||||||||||                                                             ]",
	"[||||||||||||||||||||                                                            ]",
	"[|||||||||||||||||||||                                                           ]",
	"[||||||||||||||||||||||                                                          ]",
	"[|||||||||||||||||||||||                                                         ]",
	"[||||||||||||||||||||||||                                                        ]",
	"[|||||||||||||||||||||||||                                                       ]",
	"[||||||||||||||||||||||||||                                                      ]",
	"[|||||||||||||||||||||||||||                                                     ]",
	"[||||||||||||||||||||||||||||                                                    ]",
	"[|||||||||||||||||||||||||||||                                                   ]",
	"[||||||||||||||||||||||||||||||                                                  ]",
	"[|||||||||||||||||||||||||||||||                                                 ]",
	"[||||||||||||||||||||||||||||||||                                                ]",
	"[|||||||||||||||||||||||||||||||||                                               ]",
	"[||||||||||||||||||||||||||||||||||                                              ]",
	"[|||||||||||||||||||||||||||||||||||                                             ]",
	"[||||||||||||||||||||||||||||||||||||                                            ]",
	"[|||||||||||||||||||||||||||||||||||||                                           ]",
	"[||||||||||||||||||||||||||||||||||||||                                          ]",
	"[|||||||||||||||||||||||||||||||||||||||                                         ]",
	"[||||||||||||||||||||||||||||||||||||||||                                        ]",
	"[|||||||||||||||||||||||||||||||||||||||||                                       ]",
	"[||||||||||||||||||||||||||||||||||||||||||                                      ]",
	"[|||||||||||||||||||||||||||||||||||||||||||                                     ]",
	"[||||||||||||||||||||||||||||||||||||||||||||                                    ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||                                   ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||                                  ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||                                 ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||                                ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||                               ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||                              ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||                             ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||                            ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||                           ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||                          ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||                         ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||                        ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||                       ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||                      ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||                     ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||                    ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||                   ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||                  ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||                 ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||                ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||               ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||              ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||             ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||            ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||           ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||          ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||         ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||        ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||      ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||     ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||    ]",
	"[|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||   ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||  ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| ]",
	"[||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||]"
];

_progress = format ["%1",(_bars select _required)];
_fraction = format ["%1: %2 / %3",_perceivable,_value,_max];

hint format ["%1\n%2",_progress,_fraction];