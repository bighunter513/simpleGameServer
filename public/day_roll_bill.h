/*
 * day_roll_bill.h
 *
 *  Created on: 2011-10-19
 *      Author: gxl2007@hotmail.com
 */

#ifndef DAY_ROLL_BILL_H_
#define DAY_ROLL_BILL_H_

#include <time.h>


class day_roll_bill
{
public:
    enum
    {
        MAX_PREFIX_SIZE = 1024 ,
        MAX_LINE_SIZE = 4096 ,
    };

    enum
    {
        NONE_IOBUF_SIZE = 0 ,
        MIN_IOBUF_SIZE = MAX_LINE_SIZE ,
        MAX_IOBUF_SIZE = MAX_LINE_SIZE * 1000 ,
    };

private:
    static int MAX_LINE_CONTENT ;

public:
    int init(const char* prefix,int buf_size = NONE_IOBUF_SIZE) ;

    /*
     * @brief clean up
     */
    void fini() ;

    /*
     * @brief write formatted log data
     * @param [in] log level
     * @param [in] format string
     * @param [in] data
     */

    int write_sql(int seq,int result,const char* sql);
	
protected:
    // each message auto add a time header like "2013-09-16 11:33:33|" th the beginning
    int write_format(const char* fmt,...) ;
    
    // just write the caller passed message, no else appender add.
    int write_clean_format(const char* fmt,...);

    /*
     * @brief flush buffered data to disk
     */
    int flush() ;

    const char* get_prefix() { return m_prefix ; } ;

public:
    day_roll_bill();
    ~day_roll_bill();

private:
    day_roll_bill(const day_roll_bill& ) ;
    day_roll_bill& operator=(const day_roll_bill&) ;

private:

    typedef struct
    {
        int size ;
        int pos ;
        char data[0] ;
    } memory_buffer ;

protected:
    int prepare() ;

protected:
    int m_fd ;
    int m_filedate ;
    short m_level ;
    short m_delay ;
    memory_buffer* m_buf ;
    char m_prefix[MAX_PREFIX_SIZE] ;
    struct tm m_now ;


};

#endif /* DAY_ROLL_BILL_H_ */
