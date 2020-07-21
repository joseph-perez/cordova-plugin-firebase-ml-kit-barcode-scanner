// View controller demonstraing how to use the barcode detector with the AVFoundation
// video pipeline.
@protocol senddataProtocol <NSObject>

-(void)closeScanner;
-(void)sendResult:(NSString *)result;

@end

@interface CameraViewController : UIViewController

@property(nonatomic,assign)id delegate;
@property(nonatomic,assign) NSNumber *barcodeFormats;
@property(nonatomic,assign) CGFloat scanAreaWidth;
@property(nonatomic,assign) CGFloat scanAreaHeight;
@property(nonatomic,assign) CGFloat viewPositionX;
@property(nonatomic,assign) CGFloat viewPositionY;
@property(nonatomic,assign) CGFloat viewWidth;
@property(nonatomic,assign) CGFloat viewHeight;

@end

