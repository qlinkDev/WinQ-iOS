//
//  RankingCell.h
//  Qlink
//
//  Created by Jelly Foo on 2018/8/1.
//  Copyright © 2018年 pan. All rights reserved.
//

#import <UIKit/UIKit.h>
static NSString *RankingCellReuse = @"RankingCell";
#define RankingCell_Height 75

@interface RankingCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *lblconnet;
@property (weak, nonatomic) IBOutlet UIImageView *headImageView;
@property (weak, nonatomic) IBOutlet UILabel *lblCount;
@end
